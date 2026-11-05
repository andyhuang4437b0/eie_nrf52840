/**
 * @file main.c
 */

#include <inttypes.h>

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#include "BTN.h"
#include "LED.h"

#define SLEEP_MS 1

int main(void) {
  if (0 > BTN_init()) {
    printk("BTN init failed");
    return 0;
  }
  printk("trans1\n");
  if (0 > LED_init()) {
    printk("LED init failed");
    return 0;
  }

  while (1) {
    printk("trans3\n");
    k_msleep(SLEEP_MS);
  }
  return 0;
}
