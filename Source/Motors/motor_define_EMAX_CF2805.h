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
 * OTHERWISE. (C)Copyright TOSHIBA CORPORATION 2011-2012 All rights reserved
 */
#ifndef _MOTOR_DEFINE_H_
#define _MOTOR_DEFINE_H_

#include "motorctrl.h"

#define  MOTOR_POLE_PAIRS                               7 /* [NONE] */               
#define  MOTOR_DIRECTION                                3 /* [NONE]          0 - None 1 - CW only 2 - CCW only 3 - CW and CCW */                                                                                                                                                                                                                                                                                                                                                             
#define  MOTOR_ENCODER_TYPE                             0 /* [NONE]          0 - No encoder 1 - Use encoder for speed control 2 - Use encoder for counting events */                                                                                                                                                                                                                                                                                                                         
#define  MOTOR_ENCODER_RESOLUTION                       0 /* [NONE]          Number of pulses per physical turn */                                                                                                                                                                                                                                                                                                                                                                           
#define  MOTOR_RESOLUTION_MULT                          0 /* [NONE]          Multiply factor if needed */                                                                                                                                                                                                                                                                                                                                                                                    
#define  MOTOR_ANGULAR_ACC_MAX                        100 /* [rad/sec²]      Maximum angular acceleration Speed up limit for the motor */                                                                                                                                                                                                                                                                                                                                                    
#define  MOTOR_TORQUE_MAX                               0 /* [mNm/A]         Torque Factor of the Motor Used only for statistics graph */                                                                                                                                                                                                                                                                                                                                                    
#define  MOTOR_RESISTANCE                              72 /* [mOhm]          Resistance per phase */                                                                                                                                                                                                                                                                                                                                                                                         
#define  MOTOR_INDUCTANCE                               6 /* [μH]            Inductance per phase */                                                                                                                                                                                                                                                                                                                                                                                         
#define  MOTOR_HZ_LIMIT                               400 /* [Hz]            Maximum rating for motor */                                                                                                                                                                                                                                                                                                                                                                                     
#define  MOTOR_HZ_CHANGE                              100 /* [Hz]            Change frequency from Forced- to Field-Oriented-Commutation */                                                                                                                                                                                                                                                                                                                                                  
#define  MOTOR_POSITION_DELAY                         100 /* [ms]            Time to reach the start position (DC-Exitation) */                                                                                                                                                                                                                                                                                                                                                              
#define  MOTOR_IQ_START                              2000 /* [mA]            Torque current in Forced-Commutation stage Limited by IqLim */                                                                                                                                                                                                                                                                                                                                                  
#define  MOTOR_ID_START                              2000 /* [mA]            Flux current in Forced-Commutation stage Limited by IdLim */                                                                                                                                                                                                                                                                                                                                                    
#define  MOTOR_IQ_LIM                                2000 /* [mA]            Torque current maximum */                                                                                                                                                                                                                                                                                                                                                                                       
#define  MOTOR_ID_LIM                                2000 /* [mA]            Flux current maximum */                                                                                                                                                                                                                                                                                                                                                                                         
#define  MOTORID                            "EMAX CF2805"

#define  CONTROL_ID_KI                                 20 /* [V/As]          Integration part of PI Controller for flux current */                                                                                                                                                                                                                                                                                                                                                           
#define  CONTROL_ID_KP                                 20 /* [V/A]           Proportional part of PI Controller for flux current */                                                                                                                                                                                                                                                                                                                                                          
#define  CONTROL_IQ_KI                                 20 /* [V/As]          Integration part of PI Controller for torque current */                                                                                                                                                                                                                                                                                                                                                         
#define  CONTROL_IQ_KP                                 20 /* [V/A]           Proportional part of PI Controller for torque current */                                                                                                                                                                                                                                                                                                                                                        
#define  CONTROL_POSITION_KI                          100 /* [Hz/Vs]         Integration part of PI Controller of position estimator */                                                                                                                                                                                                                                                                                                                                                      
#define  CONTROL_POSITION_KP                        10000 /* [mHz/V]         Proportional part of PI Controller of position estimator */                                                                                                                                                                                                                                                                                                                                                     
#define  CONTROL_SPEED_KI                             100 /* [mA/Hz*s]       Integration part of PI Controller of speed controller */                                                                                                                                                                                                                                                                                                                                                        
#define  CONTROL_SPEED_KP                             200 /* [mA/Hz]         Proportional part of PI Controller of speed controller */                                                                                                                                                                                                                                                                                                                                                       

#define  SYSTEM_PWM_FREQUENCY                       16000 /* [HZ] */                 
#define  SYSTEM_SHUTDOWN_MODE                           0 /* [NONE]          0 - No signals 1 - Short brake 2 - Gentle shutdown (with MaxAngAcc) */                                                                                                                                                                                                                                                                                                                                          
#define  SYSTEM_RESTART_MODE                            0 /* [NONE]          0 - Switch off motor after stall detection 1 - Restart motor after stall detection */                                                                                                                                                                                                                                                                                                                           
#define  SYSTEM_STALL_VALUE                             0 /* [NONE]          Stall detect value as vqi in stall_detect.c (0 means switch off) For further information check the 'Firmware Usage Guide' */                                                                                                                                                                                                                                                                                    
#define  SYSTEM_OVERTEMP_VALUE                          0 /* [NONE]          Motor switch off when temerature exceeded (0 means switch off) */                                                                                                                                                                                                                                                                                                                                               
#define  SYSTEM_SPEED_CONTROL_MODE                      0 /* [NONE]          0 - No external speed control 1 - Speed control by external voltage signal 2 - Speed control by external PWM Signal */                                                                                                                                                                                                                                                                                          
#define  SYSTEM_SW_OVERVOLTAGE                          0 /* [V]             Overvoltage detection by Software (0 means switch off) */                                                                                                                                                                                                                                                                                                                                                       
#define  SYSTEM_SW_UNDERVOLTAGE                         0 /* [V]             Undervoltage detection by Software (0 means switch off) */                                                                                                                                                                                                                                                                                                                                                      

#endif