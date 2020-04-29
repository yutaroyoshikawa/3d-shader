uniform vec2 resolution;
uniform sampler2DRect texture;
uniform float time;
 
varying vec2 vTexCoord;
 
void main() {
    vec4 samplerColor = texture2DRect(texture, vTexCoord);
    vec2 p = (gl_FragCoord.xy * 2.0 - resolution) / resolution;
    float t = (sin(time) + 1.0) * 0.5;
    vec2 tvec = p * 0.5 + vec2(t) * 0.5;
    gl_FragColor = vec4(samplerColor.r + tvec.x, samplerColor.g, samplerColor.b + tvec.y, 1.0);
}
