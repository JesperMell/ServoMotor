#include<unity.h>
#define LOW 0
#define HIGH 1

bool voltage = LOW;

void testInitFunc()
{
    servo_motor_init();
    TEST_ASSERT_EQUAL_UINT8(voltage, 0);
}

int main(int ac, char **av)
{
    UNITY_BEGIN();

    UNITY_END();
}

