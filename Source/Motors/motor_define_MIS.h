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

#define  MOTOR_POLE_PAIRS                               4 /* [NONE] */               
#define  MOTOR_DIRECTION                                3 /* [NONE]          0 - None
#define  MOTOR_ENCODER_TYPE                             0 /* [NONE]          0 - No encoder
#define  MOTOR_ENCODER_COUNT                            0 /* [NONE]          Incremental Encoder Resolution */                                                                                                                                                                                                                                                                                                                                                                               
#define  MOTOR_ANGULAR_ACC_MAX                        100 /* [rad/sec²]      Maximum angular acceleration
#define  MOTOR_TORQUE_MAX                               0 /* [mNm/A]         Torque Factor of the Motor
#define  MOTOR_RESISTANCE                            3789 /* [mOhm]          Resistance per phase */                                                                                                                                                                                                                                                                                                                                                                                         
#define  MOTOR_INDUCTANCE                            3465 /* [μH]            Inductance per phase */                                                                                                                                                                                                                                                                                                                                                                                         
#define  MOTOR_HZ_LIMIT                               100 /* [Hz]            Maximum rating for motor */                                                                                                                                                                                                                                                                                                                                                                                     
#define  MOTOR_HZ_CHANGE                               10 /* [Hz]            Change frequency from Forced- to Field-Oriented-Commutation */                                                                                                                                                                                                                                                                                                                                                  
#define  MOTOR_POSITION_DELAY                         500 /* [ms]            Time to reach the start position (DC-Exitation) */                                                                                                                                                                                                                                                                                                                                                              
#define  MOTOR_IQ_START                               300 /* [mA]            Torque current in Forced-Commutation stage
#define  MOTOR_ID_START                               300 /* [mA]            Flux current in Forced-Commutation stage
#define  MOTOR_IQ_LIM                                 500 /* [mA]            Torque current maximum */                                                                                                                                                                                                                                                                                                                                                                                       
#define  MOTOR_ID_LIM                                 500 /* [mA]            Flux current maximum */                                                                                                                                                                                                                                                                                                                                                                                         
#define  MOTORID                                    "MIS"

#define  CONTROL_ID_KI                                100 /* [V/As]          Integration part of PI Controller for flux current */                                                                                                                                                                                                                                                                                                                                                           
#define  CONTROL_ID_KP                                 50 /* [V/A]           Proportional part of PI Controller for flux current */                                                                                                                                                                                                                                                                                                                                                          
#define  CONTROL_IQ_KI                                100 /* [V/As]          Integration part of PI Controller for torque current */                                                                                                                                                                                                                                                                                                                                                         
#define  CONTROL_IQ_KP                                 50 /* [V/A]           Proportional part of PI Controller for torque current */                                                                                                                                                                                                                                                                                                                                                        
#define  CONTROL_POSITION_KI                            0 /* [Hz/Vs]         Integration part of PI Controller of position estimator */                                                                                                                                                                                                                                                                                                                                                      
#define  CONTROL_POSITION_KP                         1000 /* [mHz/V]         Proportional part of PI Controller of position estimator */                                                                                                                                                                                                                                                                                                                                                     
#define  CONTROL_SPEED_KI                             100 /* [mA/Hz*s]       Integration part of PI Controller of speed controller */                                                                                                                                                                                                                                                                                                                                                        
#define  CONTROL_SPEED_KP                              10 /* [mA/Hz]         Proportional part of PI Controller of speed controller */                                                                                                                                                                                                                                                                                                                                                       

#define  SYSTEM_PWM_FREQUENCY                       16000 /* [HZ] */                 
#define  SYSTEM_SHUTDOWN_MODE                           0 /* [NONE]          0 - No signals
#define  SYSTEM_BRAKE_TIME                              0 /* [ms]            Time in ms for braking when short brake is selected */                                                                                                                                                                                                                                                                                                                                                          
#define  SYSTEM_RESTART_MODE                            0 /* [NONE]          0 - Switch off motor after stall detection
#define  SYSTEM_STALL_VALUE                             0 /* [NONE]          Stall detect value as vqi in stall_detect.c
#define  SYSTEM_OVERTEMP_VALUE                         40 /* [NONE]          Motor switch off when temerature exceeded
#define  SYSTEM_SPEED_CONTROL_MODE                      0 /* [NONE]          0 - No external speed control
#define  SYSTEM_SW_OVERVOLTAGE                        360 /* [V]             Overvoltage detection by Software
#define  SYSTEM_SW_UNDERVOLTAGE                         0 /* [V]             Undervoltage detection by Software
#define  SYSTEM_SW_OVERCURRENT                       2000 /* [mA]            Stops motor is overcurrent value is reached on input ports */                                                                                                                                                                                                                                                                                                                                                   
#define  SYSTEM_SPEED_RED_PERCENT                     100 /* [%]             Percentage of IqLimit when speed reduction is used */                                                                                                                                                                                                                                                                                                                                                           

#endif