#include <ros/ros.h>
//link with generated library:
#include "c_generated_code/acados_solver_fr_leg_pos.h" 
//with ACADOS_INCLUDE_DIRS
// #include "acados/utils/types.h"


// standard
#include <stdio.h>
#include <stdlib.h>
// acados
#include "acados/utils/print.h"
#include "acados/utils/math.h"
#include "acados_c/ocp_nlp_interface.h"
#include "acados_c/external_function_interface.h"
// #include "acados_solver_fr_leg_pos.h"

// blasfeo
#include "blasfeo/include/blasfeo_d_aux_ext_dep.h"

#define NX     FR_LEG_POS_NX
#define NZ     FR_LEG_POS_NZ
#define NU     FR_LEG_POS_NU
#define NP     FR_LEG_POS_NP
#define NBX    FR_LEG_POS_NBX
#define NBX0   FR_LEG_POS_NBX0
#define NBU    FR_LEG_POS_NBU
#define NSBX   FR_LEG_POS_NSBX
#define NSBU   FR_LEG_POS_NSBU
#define NSH    FR_LEG_POS_NSH
#define NSG    FR_LEG_POS_NSG
#define NSPHI  FR_LEG_POS_NSPHI
#define NSHN   FR_LEG_POS_NSHN
#define NSGN   FR_LEG_POS_NSGN
#define NSPHIN FR_LEG_POS_NSPHIN
#define NSBXN  FR_LEG_POS_NSBXN
#define NS     FR_LEG_POS_NS
#define NSN    FR_LEG_POS_NSN
#define NG     FR_LEG_POS_NG
#define NBXN   FR_LEG_POS_NBXN
#define NGN    FR_LEG_POS_NGN
#define NY0    FR_LEG_POS_NY0
#define NY     FR_LEG_POS_NY
#define NYN    FR_LEG_POS_NYN
#define NH     FR_LEG_POS_NH
#define NPHI   FR_LEG_POS_NPHI
#define NHN    FR_LEG_POS_NHN
#define NPHIN  FR_LEG_POS_NPHIN
#define NR     FR_LEG_POS_NR

int main(int argc, char **argv) {

// Ros: node SETUP
#pragma region
ros::init(argc, argv, "test_acados");
ros::NodeHandle nh;

// double loop_freq = 100 ;
// ros::Rate loop_rate(loop_freq); //HZ
// #pragma endregion

// while(ros::ok()){
//   ros::spinOnce(); // Process any callbacks
//   loop_rate.sleep();
// }

fr_leg_pos_solver_capsule *acados_ocp_capsule = fr_leg_pos_acados_create_capsule();
    // there is an opportunity to change the number of shooting intervals in C without new code generation
    int N = FR_LEG_POS_N;
    // allocate the array and fill it accordingly
    double* new_time_steps = NULL;
    int status = fr_leg_pos_acados_create_with_discretization(acados_ocp_capsule, N, new_time_steps);

    if (status)
    {
        printf("fr_leg_pos_acados_create() returned status %d. Exiting.\n", status);
        exit(1);
    }

    ocp_nlp_config *nlp_config = fr_leg_pos_acados_get_nlp_config(acados_ocp_capsule);
    ocp_nlp_dims *nlp_dims = fr_leg_pos_acados_get_nlp_dims(acados_ocp_capsule);
    ocp_nlp_in *nlp_in = fr_leg_pos_acados_get_nlp_in(acados_ocp_capsule);
    ocp_nlp_out *nlp_out = fr_leg_pos_acados_get_nlp_out(acados_ocp_capsule);
    ocp_nlp_solver *nlp_solver = fr_leg_pos_acados_get_nlp_solver(acados_ocp_capsule);
    void *nlp_opts = fr_leg_pos_acados_get_nlp_opts(acados_ocp_capsule);

    // initial condition
    int idxbx0[NBX0];
    idxbx0[0] = 0;
    idxbx0[1] = 1;
    idxbx0[2] = 2;
    idxbx0[3] = 3;
    idxbx0[4] = 4;
    idxbx0[5] = 5;
    idxbx0[6] = 6;
    idxbx0[7] = 7;
    idxbx0[8] = 8;
    idxbx0[9] = 9;

    double lbx0[NBX0];
    double ubx0[NBX0];
    lbx0[0] = 0;
    ubx0[0] = 0;
    lbx0[1] = 0;
    ubx0[1] = 0;
    lbx0[2] = 0;
    ubx0[2] = 0;
    lbx0[3] = 0;
    ubx0[3] = 0;
    lbx0[4] = 0;
    ubx0[4] = 0;
    lbx0[5] = 0;
    ubx0[5] = 0;
    lbx0[6] = 0;
    ubx0[6] = 0;
    lbx0[7] = 0;
    ubx0[7] = 0;
    lbx0[8] = 0;
    ubx0[8] = 0;
    lbx0[9] = 0;
    ubx0[9] = 0;

    double lbxf[NBX0];
    double ubxf[NBX0];
    lbxf[0] = 0;
    ubxf[0] = 0;
    lbxf[1] = 1.8000;
    ubxf[1] = 1.8000;
    lbxf[2] = -1.1703;
    ubxf[2] = -1.1703;
    lbxf[3] = -0.7000;
    ubxf[3] = -0.7000;
    lbxf[4] = 0.4087;
    ubxf[4] = 0.4087;
    lbxf[5] = 0;
    ubxf[5] = 0;
    lbxf[6] = 0;
    ubxf[6] = 0;
    lbxf[7] = 0;
    ubxf[7] = 0;
    lbxf[8] = 0;
    ubxf[8] = 0;
    lbxf[9] = 0;
    ubxf[9] = 0;

    ocp_nlp_constraints_model_set(nlp_config, nlp_dims, nlp_in, 0, "idxbx", idxbx0);
    ocp_nlp_constraints_model_set(nlp_config, nlp_dims, nlp_in, 0, "lbx", lbx0);
    ocp_nlp_constraints_model_set(nlp_config, nlp_dims, nlp_in, 0, "ubx", ubx0);

    ocp_nlp_constraints_model_set(nlp_config, nlp_dims, nlp_in, N, "idxbx", idxbx0);
    ocp_nlp_constraints_model_set(nlp_config, nlp_dims, nlp_in, N, "lbx", lbxf);
    ocp_nlp_constraints_model_set(nlp_config, nlp_dims, nlp_in, N, "ubx", ubxf);

    // initialization for state values
    double x_init[NX];
    x_init[0] = 0.0;
    x_init[1] = 0.0;
    x_init[2] = 0.0;
    x_init[3] = 0.0;
    x_init[4] = 0.0;
    x_init[5] = 0.0;
    x_init[6] = 0.0;
    x_init[7] = 0.0;
    x_init[8] = 0.0;
    x_init[9] = 0.0;

    // initial value for control input
    double u0[NU];
    u0[0] = 0.0;
    u0[1] = 0.0;
    u0[2] = 0.0;

    // prepare evaluation
    int NTIMINGS = 1;
    double min_time = 1e12;
    double kkt_norm_inf;
    double elapsed_time;
    int sqp_iter;

    double xtraj[NX * (N+1)];
    double utraj[NU * N];


    // solve ocp in loop
    int rti_phase = 0;

    for (int ii = 0; ii < NTIMINGS; ii++)
    {
        // initialize solution
        for (int i = 0; i < N; i++)
        {
            ocp_nlp_out_set(nlp_config, nlp_dims, nlp_out, i, "x", x_init);
            ocp_nlp_out_set(nlp_config, nlp_dims, nlp_out, i, "u", u0);
        }
        ocp_nlp_out_set(nlp_config, nlp_dims, nlp_out, N, "x", x_init);
        ocp_nlp_solver_opts_set(nlp_config, nlp_opts, "rti_phase", &rti_phase);
        status = fr_leg_pos_acados_solve(acados_ocp_capsule);
        ocp_nlp_get(nlp_config, nlp_solver, "time_tot", &elapsed_time);
        min_time = MIN(elapsed_time, min_time);
    }

    /* print solution and statistics */
    for (int ii = 0; ii <= nlp_dims->N; ii++)
        ocp_nlp_out_get(nlp_config, nlp_dims, nlp_out, ii, "x", &xtraj[ii*NX]);
    for (int ii = 0; ii < nlp_dims->N; ii++)
        ocp_nlp_out_get(nlp_config, nlp_dims, nlp_out, ii, "u", &utraj[ii*NU]);

    printf("\n--- xtraj ---\n");
    d_print_exp_tran_mat( NX, N+1, xtraj, NX);
    printf("\n--- utraj ---\n");
    d_print_exp_tran_mat( NU, N, utraj, NU );
    // ocp_nlp_out_print(nlp_solver->dims, nlp_out);

    printf("\nsolved ocp %d times, solution printed above\n\n", NTIMINGS);

    if (status == ACADOS_SUCCESS)
    {
        printf("fr_leg_pos_acados_solve(): SUCCESS!\n");
    }
    else
    {
        printf("fr_leg_pos_acados_solve() failed with status %d.\n", status);
    }

    // get solution
    ocp_nlp_out_get(nlp_config, nlp_dims, nlp_out, 0, "kkt_norm_inf", &kkt_norm_inf);
    ocp_nlp_get(nlp_config, nlp_solver, "sqp_iter", &sqp_iter);

    fr_leg_pos_acados_print_stats(acados_ocp_capsule);

    printf("\nSolver info:\n");
    printf(" SQP iterations %2d\n minimum time for %d solve %f [ms]\n KKT %e\n",
           sqp_iter, NTIMINGS, min_time*1000, kkt_norm_inf);

    // free solver
    status = fr_leg_pos_acados_free(acados_ocp_capsule);
    if (status) {
        printf("fr_leg_pos_acados_free() returned status %d. \n", status);
    }
    // free solver capsule
    status = fr_leg_pos_acados_free_capsule(acados_ocp_capsule);
    if (status) {
        printf("fr_leg_pos_acados_free_capsule() returned status %d. \n", status);
    }

    return status;
return 0;
}