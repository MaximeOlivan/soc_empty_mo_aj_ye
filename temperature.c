#include "temperature.h"
#include "sl_sensor_rht.h"
#include "app_log.h"

int16_t lecture_temp()
{
  int32_t t = 0;
  uint32_t rh = 1;

  sl_sensor_rht_get(&rh, &t);
  int16_t t_ble = (int16_t)(t / 10);
  //app_log_info("La temperature est de : %ld C \n",t_ble);
  app_log_info("La temperature est de : %d C \n", t_ble/100);

  return t_ble;
}

