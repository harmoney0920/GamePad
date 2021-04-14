const uint8_t enemy_MASK[15][120] PROGMEM={
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 192, 0, 0, 0, 31, 224, 0, 0, 0, 63, 240, 0, 0, 0, 63, 240, 0, 0, 0, 63, 240, 0, 0, 0, 63, 240, 0, 0, 0, 63, 240, 0, 0, 0, 31, 240, 0, 0, 0, 63, 240, 0, 0, 0, 127, 248, 0, 0, 0, 127, 248, 0, 0, 0, 127, 240, 0, 0, 0, 255, 248, 0, 0, 0, 255, 252, 0, 0, 0, 255, 252, 0, 0, 0, 127, 252, 0, 0, 0, 31, 255, 0, 0, 0, 31, 255, 128, 0, 0, 31, 255, 128, 0, 0, 31, 248, 0, 0, 0, 15, 112, 0, },
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 192, 0, 0, 0, 31, 224, 0, 0, 0, 63, 240, 0, 0, 0, 63, 240, 0, 0, 0, 63, 240, 0, 0, 0, 63, 240, 0, 0, 0, 63, 240, 0, 0, 0, 31, 240, 0, 0, 0, 15, 240, 0, 0, 0, 31, 240, 0, 0, 0, 31, 224, 0, 0, 0, 15, 224, 0, 0, 0, 15, 224, 0, 0, 0, 15, 224, 0, 0, 0, 15, 224, 0, 0, 0, 15, 240, 0, 0, 0, 15, 254, 0, 0, 0, 7, 255, 192, 0, 0, 7, 239, 224, 0, 0, 7, 225, 224, },
{0, 0, 48, 0, 0, 0, 0, 56, 0, 0, 0, 0, 28, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 192, 0, 0, 0, 31, 224, 0, 0, 0, 63, 224, 0, 0, 0, 63, 224, 0, 0, 0, 63, 240, 0, 0, 0, 63, 248, 0, 0, 0, 63, 252, 0, 0, 0, 63, 254, 0, 0, 0, 127, 254, 0, 0, 0, 127, 254, 0, 0, 0, 127, 252, 0, 0, 0, 63, 248, 0, 0, 0, 15, 248, 0, 0, 0, 15, 240, 0, 0, 0, 15, 240, 0, 0, 0, 31, 240, 0, 0, 0, 63, 248, 0, 0, 0, 126, 248, 0, 0, 0, 254, 252, 0, 0, 0, 254, 252, 0, },
{0, 0, 31, 240, 0, 0, 0, 31, 254, 0, 0, 0, 15, 255, 192, 0, 0, 3, 255, 240, 0, 0, 7, 255, 252, 0, 0, 15, 255, 255, 0, 0, 31, 255, 255, 0, 0, 31, 255, 255, 0, 0, 31, 255, 255, 0, 0, 127, 255, 255, 0, 0, 255, 255, 255, 0, 0, 255, 255, 255, 0, 0, 255, 255, 255, 0, 0, 127, 255, 255, 0, 0, 31, 255, 255, 0, 0, 31, 255, 255, 0, 0, 63, 255, 255, 0, 0, 255, 255, 255, 0, 3, 255, 255, 255, 0, 15, 255, 255, 255, 0, 63, 255, 255, 255, 0, 255, 255, 255, 255, 1, 255, 255, 255, 255, 3, 255, 255, 255, 252, },
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 192, 0, 0, 0, 15, 224, 0, 0, 0, 31, 240, 0, 0, 0, 31, 240, 0, 0, 0, 31, 240, 0, 0, 0, 127, 240, 0, 0, 0, 255, 240, 0, 0, 0, 255, 240, 0, 0, 0, 255, 240, 0, 0, 0, 127, 224, 0, 0, 0, 31, 224, 0, 0, 0, 31, 224, 0, 0, 0, 63, 224, 0, 0, 0, 255, 224, 0, 0, 3, 255, 240, 0, 0, 15, 255, 248, 0, 0, 63, 63, 248, 0, 0, 252, 126, 124, 0, 1, 240, 252, 124, 0, 0, 192, 252, 124, 0, },
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 7, 224, 56, 0, 0, 15, 240, 112, 0, 0, 31, 248, 224, 0, 0, 31, 249, 192, 0, 0, 31, 251, 128, 0, 0, 31, 255, 0, 0, 0, 31, 254, 0, 0, 0, 31, 252, 96, 0, 0, 15, 248, 240, 0, 0, 7, 241, 248, 0, 0, 7, 255, 252, 0, 0, 15, 255, 252, 0, 0, 15, 255, 248, 0, 0, 7, 255, 240, 0, 0, 3, 255, 224, 0, 0, 1, 255, 192, 0, 0, 0, 255, 128, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 224, 0, 0, 0, 15, 240, 0, 0, 0, 31, 248, 0, 0, 0, 31, 248, 0, 0, 0, 31, 248, 0, 0, 0, 31, 248, 0, 0, 0, 31, 248, 0, 0, 0, 31, 248, 96, 0, 0, 15, 248, 240, 0, 0, 7, 241, 248, 0, 0, 7, 255, 252, 0, 0, 15, 255, 252, 0, 0, 15, 255, 248, 0, 0, 7, 255, 240, 0, 0, 3, 255, 224, 0, 0, 1, 255, 192, 0, 0, 0, 255, 128, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 240, 0, 0, 0, 0, 248, 0, 0, 63, 193, 252, 0, 0, 127, 193, 254, 0, 0, 255, 253, 254, 0, 0, 255, 255, 252, 0, 0, 255, 255, 254, 0, 0, 255, 255, 255, 0, 0, 255, 255, 255, 0, 0, 255, 255, 255, 0, 0, 255, 255, 255, 0, 0, 127, 255, 255, 0, 0, },
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 240, 0, 0, 0, 7, 248, 0, 0, 0, 15, 252, 0, 0, 0, 15, 252, 0, 0, 0, 15, 252, 0, 0, 0, 15, 252, 0, 0, 0, 15, 252, 0, 0, 0, 15, 248, 0, 0, 0, 15, 252, 0, 0, 0, 31, 254, 0, 0, 0, 31, 254, 0, 0, 0, 15, 254, 0, 0, 0, 31, 255, 0, 0, 0, 63, 255, 0, 0, 0, 63, 255, 0, 0, 0, 63, 254, 0, 0, 0, 255, 248, 0, 0, 1, 255, 248, 0, 0, 1, 255, 248, 0, 0, 0, 31, 248, 0, 0, 0, 14, 240, 0, },
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 240, 0, 0, 0, 7, 248, 0, 0, 0, 15, 252, 0, 0, 0, 15, 252, 0, 0, 0, 15, 252, 0, 0, 0, 15, 252, 0, 0, 0, 15, 252, 0, 0, 0, 15, 248, 0, 0, 0, 15, 240, 0, 0, 0, 15, 248, 0, 0, 0, 7, 248, 0, 0, 0, 7, 240, 0, 0, 0, 7, 240, 0, 0, 0, 7, 240, 0, 0, 0, 7, 240, 0, 0, 0, 15, 240, 0, 0, 0, 127, 240, 0, 0, 3, 255, 224, 0, 0, 7, 247, 224, 0, 0, 7, 135, 224, 0, },
{0, 0, 0, 12, 0, 0, 0, 0, 28, 0, 0, 0, 0, 56, 0, 0, 0, 0, 112, 0, 0, 0, 3, 240, 0, 0, 0, 7, 248, 0, 0, 0, 7, 252, 0, 0, 0, 7, 252, 0, 0, 0, 15, 252, 0, 0, 0, 31, 252, 0, 0, 0, 63, 252, 0, 0, 0, 127, 252, 0, 0, 0, 127, 254, 0, 0, 0, 127, 254, 0, 0, 0, 63, 254, 0, 0, 0, 31, 252, 0, 0, 0, 31, 240, 0, 0, 0, 15, 240, 0, 0, 0, 15, 240, 0, 0, 0, 15, 248, 0, 0, 0, 31, 252, 0, 0, 0, 31, 126, 0, 0, 0, 63, 127, 0, 0, 0, 63, 127, 0, },
{0, 0, 15, 248, 0, 0, 0, 127, 248, 0, 0, 3, 255, 240, 0, 0, 15, 255, 192, 0, 0, 63, 255, 224, 0, 0, 255, 255, 240, 0, 3, 255, 255, 248, 0, 7, 255, 255, 248, 0, 15, 255, 255, 248, 0, 31, 255, 255, 254, 0, 63, 255, 255, 255, 0, 63, 255, 255, 255, 0, 127, 255, 255, 255, 0, 127, 255, 255, 254, 0, 127, 255, 255, 248, 0, 127, 255, 255, 248, 0, 63, 255, 255, 252, 0, 63, 255, 255, 255, 0, 31, 255, 255, 255, 192, 15, 255, 255, 255, 240, 7, 255, 255, 255, 252, 3, 255, 255, 255, 255, 0, 255, 255, 255, 255, 0, 63, 255, 255, 255, },
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 56, 0, 0, 7, 224, 112, 0, 0, 15, 240, 224, 0, 0, 31, 249, 192, 0, 0, 31, 251, 128, 0, 0, 31, 255, 0, 0, 0, 31, 254, 0, 0, 0, 31, 252, 0, 0, 0, 31, 248, 96, 0, 0, 15, 248, 240, 0, 0, 7, 241, 248, 0, 0, 7, 255, 252, 0, 0, 15, 255, 252, 0, 0, 15, 255, 248, 0, 0, 7, 255, 240, 0, 0, 3, 255, 224, 0, 0, 1, 255, 192, 0, 0, 0, 255, 128, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 224, 0, 0, 0, 15, 240, 0, 0, 0, 31, 248, 0, 0, 0, 31, 248, 0, 0, 0, 31, 248, 0, 0, 0, 31, 248, 0, 0, 0, 31, 248, 0, 0, 0, 31, 248, 96, 0, 0, 15, 248, 240, 0, 0, 7, 241, 248, 0, 0, 7, 255, 252, 0, 0, 15, 255, 252, 0, 0, 15, 255, 248, 0, 0, 7, 255, 240, 0, 0, 3, 255, 224, 0, 0, 1, 255, 192, 0, 0, 0, 255, 128, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 240, 0, 0, 0, 0, 248, 0, 0, 63, 193, 252, 0, 0, 127, 193, 254, 0, 0, 255, 253, 254, 0, 0, 255, 255, 252, 0, 0, 255, 255, 254, 0, 0, 255, 255, 255, 0, 0, 255, 255, 255, 0, 0, 255, 255, 255, 0, 0, 255, 255, 255, 0, 0, 127, 255, 255, 0, 0, },
};