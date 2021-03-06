/* THE SOURCE CODE AND ITS
 * RELATED DOCUMENTATION IS PROVIDED "AS IS". TOSHIBA CORPORATION MAKES NO OTHER
 * WARRANTY OF ANY KIND, WHETHER EXPRESS, IMPLIED OR, STATUTORY AND DISCLAIMS ANY
 * AND ALL IMPLIED WARRANTIES OF MERCHANTABILITY, SATISFACTORY QUALITY, NON
 * INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE. THE SOURCE CODE AND
 * DOCUMENTATION MAY INCLUDE ERRORS. TOSHIBA CORPORATION RESERVES THE RIGHT TO
 * INCORPORATE MODIFICATIONS TO THE SOURCE CODE IN LATER REVISIONS OF IT, AND TO
 * MAKE IMPROVEMENTS OR CHANGES IN THE DOCUMENTATION OR THE PRODUCTS OR
 * TECHNOLOGIES DESCRIBED THEREIN AT ANY TIME. TOSHIBA CORPORATION SHALL NOT BE
 * LIABLE FOR ANY DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGE OR LIABILITY ARISING
 * FROM YOUR USE OF THE SOURCE CODE OR ANY DOCUMENTATION, INCLUDING BUT NOT
 * LIMITED TO, LOST REVENUES, DATA OR PROFITS, DAMAGES OF ANY SPECIAL, INCIDENTAL
 * OR CONSEQUENTIAL NATURE, PUNITIVE DAMAGES, LOSS OF PROPERTY OR LOSS OF PROFITS
 * ARISING OUT OF OR IN CONNECTION WITH THIS AGREEMENT, OR BEING UNUSABLE, EVEN IF
 * ADVISED OF THE POSSIBILITY OR PROBABILITY OF SUCH DAMAGES AND WHETHER A CLAIM
 * FOR SUCH DAMAGE IS BASED UPON WARRANTY, CONTRACT, TORT, NEGLIGENCE OR
 * OTHERWISE. (C)Copyright TOSHIBA CORPORATION 2011 All rights reserved
 */
#include <stdint.h>

//#define HWPATCH_2_TIMES_LV

#define USE_TEMPERATURE_CONTROL                                                 /*!< Activate Temperature Control and measurement */
#define TEMP_SLOPE 5
#define VISHAY_NTCLE100E3103JB0

#ifndef HWPATCH_2_TIMES_LV
#define USE_EMERGENCY_SIGNAL
#endif

#define USE_OVERVOLTAGE_SIGNAL

/* BOARD PARAMETER */
#ifndef HWPATCH_2_TIMES_LV
#define BOARD_NAME_PWR                          "Hitex M370 HV"
#else
#define BOARD_NAME_PWR                          "Hitex M370 LVPatch"
#endif

#define BOARD_DEAD_TIME                         1400                            /* [ns]             - Dead time for FETs */
#define BOARD_BOOTSTRAP_DELAY                     10                            /* [ms]             - Bootstrap time */

#ifdef HWPATCH_2_TIMES_LV
#define BOARD_SENSITIVITY_CURRENT_MEASURE       278                             /* [mV/A]           - Sensivity of current measurement circuit */
#define BOARD_MEASUREMENT_TYPE                  CURRENT_SHUNT_3                 /* NONE */
#define BOARD_SENSITIVITY_VOLTAGE_MEASURE       139                             /* [mV/V]           - Sensivity of voltage measurement circuit  */
#define BOARD_VDC_CHANNEL_0                     24                              /* [V]              - VDC value for Channel 0 */
#else
#define BOARD_SENSITIVITY_CURRENT_MEASURE       278                             /* [mV/A]           - Sensivity of current measurement circuit */
#define BOARD_MEASUREMENT_TYPE                  CURRENT_SHUNT_3                 /* NONE */
#define BOARD_SENSITIVITY_VOLTAGE_MEASURE       12                              /* [mV/V]           - Sensivity of voltage measurement circuit  */
#endif /* HWPATCH_2_TIMES_LV */

#define BOARD_POLL                              1                               /* NONE             - Low  Side FETs high active */
#define BOARD_POLH                              1                               /* NONE             - High Side FETs high active */
