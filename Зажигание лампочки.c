#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[128];
	float b;
	while (scanf("%s",str))
	{
		printf("%s\n", "helloy");
		if (!strcmp(str, "\"temperature\":"))
		{
			scanf("%f", &b);
			printf("%f\n", b);
			if (b >= 20.0)
			{
				system("sudo mosquitto_pub -h \"10.96.4.11\" -t \"devices/lora/807B850200005C8/gpio\" -m \"set 1 1\"");
			}
			else
			{
				system("sudo mosquitto_pub -h \"10.96.4.11\" -t \"devices/lora/807B850200005C8/gpio\" -m \"set 1 0\"");
			}
		}
	}
	return 0;
}

















