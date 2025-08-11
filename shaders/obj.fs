#version 330 core
out vec4 FragColor;

in vec2 TexCoords;
in vec3 FragPos;  
in vec3 Normal;  

// struct Light {
//     vec3 position;
//     vec3 ambient;
//     vec3 diffuse;
// };

uniform sampler2D texture_diffuse1;
//uniform Light light;

void main()
{    
//     vec4 texColor = texture(texture_diffuse1, TexCoords);
//     if(texColor.a < 0.1)
//         discard;
//     vec3 norm = normalize(Normal);
//     vec3 lightDir = normalize(light.position - FragPos);
//     float diff = max(dot(norm, lightDir), 0.0);
//     vec3 diffuse = light.diffuse * diff * texture(texture_diffuse1, TexCoords).rgb;  

    //vec3 result = ambient + diffuse;

    FragColor = vec4(texture_diffuse1, 1.0);
}
/**/