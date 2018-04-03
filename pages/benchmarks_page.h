/*! \page page_benchmark_results Benchmarks
 * 
 * \tableofcontents
 * 
 * \section benchmarks-dolan-more Dolan-Moré performance profiles
 * 
 * In order to compare different solvers, we employ the [Dolan-Moré performance 
 * profile plot](https://pdfs.semanticscholar.org/54a2/0dbd409436be4f188dfa9a78949a1cac230d.pdf).
 * 
 * Let us briefly introduce the Dolan-Moré performance profile plot. 
 * 
 * Let \f$P\f$ be a finite set of problems used as benchmarks and \f$S\f$ be a 
 * set of solvers we want to compare to one another.
 * 
 * Let \f$t_{p,s}\f$ be the computing cost (e.g., time of flops) to solve a problem 
 * \f$p\f$ using a solver \f$s\f$.
 * 
 * We define the ration between \f$t_{p,s}\f$ and the lowest observed cost to solve
 * this problem using some solver \f$s\in S\f$:
 * 
 * \f{eqnarray*}{
 * r_{p,s} = \frac{t_{p,s}}{\min_{s \in S} t_{p,s}}.
 * \f}
 * 
 * If a solver \f$s\f$ does not solve a problem \f$p\f$, then we assign to \f$r_{p,s}\f$
 * a very high value \f$r_M > r_{p,s}\f$ for all other \f$p,s\f$.
 * 
 * The cumulative distribution of the performance ratio is the Dolan-Moré performance 
 * profile plot.
 * 
 * In particular, define
 * 
 * \f{eqnarray*}{
 * \rho_s(\tau) = \frac{1}{n_p}\#\{p\in P: r_{p,s}\leq \tau\},
 * \f}
 * 
 * for \f$\tau\geq 1\f$ and where \f$n_p\f$ is the number of problems.
 * 
 * The Dolan-Moré performance profile is the plot of \f$\rho_s\f$ vs \f$\tau\f$,
 * typically on a logarithmic x-axis.
 *
 * \section benchmark-results Benchmark results 
 * 
 * In all benchmark results presented below we set the tolerance of \f$10^{-4}\f$.
 * 
 * \subsection benchmarks-lasso LASSO problems 
 * 
 * [1152 lasso problems](https://github.com/kul-forbes/scs/blob/master/tests/profiling_matlab/profile_runners/profile_runner_lasso.m)
 * 
 *
 * <div>
 * <table border="0">
 *  <tr>
 *      <td style="padding:1px">
 *          <img src="images/lasso/lasso-broyden-50.png" alt="lasso-broyden-50" width="95%"/>
 *      </td>
 *      <td style="padding:1px">
 *          <img src="images/lasso/lasso-broyden-100.png" alt="lasso-broyden-100" width="95%"/>
 *      </td>
 *      <td style="padding:1px">
 *          <img src="images/lasso/lasso-anderson-10-15.png" alt="lasso-anderson-10-15" width="95%"/>
 *      </td>
 *  </tr>
 * </table>
 * </div>
 * 
 *  
 * \subsection benchmarks-pca1 Regularized PCA
 * 
 * [288 regularized PCA problems](https://github.com/kul-forbes/scs/blob/master/tests/profiling_matlab/profile_runners/profile_runner_pca.m)
 * 
 * <div>
 * <table border="0">
 *  <tr>
 *      <td style="padding:1px">
 *          <img src="images/pca/pca-broyden-100.png" alt="pca-broyden-100" width="93%"/>
 *      </td>
 *      <td style="padding:1px">
 *          <img src="images/pca/pca-anderson-15.png" alt="pca-anderson-15" width="100%"/>
 *      </td>
 *      <td style="padding:1px">
 *          <img src="images/pca/pca-anderson-20.png" alt="pca-anderson-20" width="93%"/>
 *      </td>
 *  </tr>
 * </table>
 * </div>
 * 
 *  
 * \subsection benchmarks-logreg Logistic regression problems
 * 
 * [288 logistic regression problems](https://github.com/kul-forbes/scs/blob/master/tests/profiling_matlab/profile_runners/profile_runner_logreg.m)
 * 
 * <div>
 * <table border="0">
 *  <tr>
 *      <td style="padding:1px">
 *          <img src="images/logreg/logreg-broyden-50-100.png" alt="logreg-broyden-50-100" width="95%"/>
 *      </td>
 *      <td style="padding:1px">
 *          <img src="images/logreg/logreg-anderson-5.png" alt="logreg-anderson-5" width="95%"/>
 *      </td>
 *      <td style="padding:1px">
 *          <img src="images/logreg/logreg-anderson-10.png" alt="logreg-anderson-10" width="95%"/>
 *      </td>
 *  </tr>
 * </table>
 * </div>
 * 
 * \subsection benchmarks-sdp2 Semidefinite programming
 * 
 * [36 SDP problems](https://github.com/kul-forbes/scs/blob/master/tests/profiling_matlab/profile_runners/profile_runner_sdp2.m)
 * 
 * <div>
 * <table border="0">
 *  <tr>
 *      <td style="padding:1px">
 *          <img src="images/sdp2/sdp2-broyden-50.png" alt="sdp-broyden-50" width="95%"/>
 *      </td>
 *      <td style="padding:1px">
 *          <img src="images/sdp2/sdp2-anderson-10.png" alt="sdp2-anderson-10" width="95%"/>
 *      </td>
 *      <td style="padding:1px">
 *          <img src="images/sdp2/sdp2-anderson-15.png" alt="sdp2-anderson-15" width="90%"/>
 *      </td>
 *  </tr>
 * </table>
 * </div>
 * 
 * \subsection benchmarks-normcon Norm-constrained norm minimization
 * 
 * [384 norm-constrained problems](https://github.com/kul-forbes/scs/blob/master/tests/profiling_matlab/profile_runners/profile_runner_normcon.m)
 * 
 * <div>
 * <table border="0">
 *  <tr>
 *      <td style="padding:1px">
 *          <img src="images/normcon/normcon-broyden-50.png" alt="normcon-broyden-50" width="95%"/>
 *      </td>
 *      <td style="padding:1px">
 *          <img src="images/normcon/normcon-broyden-100.png" alt="normcon-broyden-100" width="95%"/>
 *      </td>
 *      <td style="padding:1px">
 *          <img src="images/normcon/normcon-anderson-5.png" alt="normcon-anderson-5" width="90%"/>
 *      </td>
 *  </tr>
 * </table>
 * </div>
 * 
 * \section maros-meszaros Maros-Meszaros Problems
 * 
 * We tested SuperSCS on the 
 * [Maros-Meszaros collection of QP problems](http://www.cuter.rl.ac.uk/Problems/marmes.html).
 * 
  * <div><table>
 * <tr>
 * 	<th>Name</th>
 * 	<th>SCS</th>
 * 	<th>Broyden 50</th>
 * 	<th>Broyden 100</th>
 * 	<th>Anderson 5</th>
 * 	<th>Anderson 10</th>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/AUG2D.SIF">AUG2D</a></td>
 * 	<td>     Inf</td>
 * 	<td>    6.69</td>
 * 	<td>   27.48</td>
 * 	<td>    3.52</td>
 * 	<td>    4.47</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/AUG2DC.SIF">AUG2DC</a></td>
 * 	<td>     Inf</td>
 * 	<td>    5.70</td>
 * 	<td>    3.91</td>
 * 	<td>    3.23</td>
 * 	<td>    7.56</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/AUG2DCQP.SIF">AUG2DCQP</a></td>
 * 	<td>    0.65</td>
 * 	<td>    0.73</td>
 * 	<td>    0.70</td>
 * 	<td>    0.43</td>
 * 	<td>    0.58</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/AUG3DCQP.SIF">AUG3DCQP</a></td>
 * 	<td>     Inf</td>
 * 	<td>    0.49</td>
 * 	<td>    1.04</td>
 * 	<td>    0.89</td>
 * 	<td>    1.58</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/AUG3DQP.SIF">AUG3DQP</a></td>
 * 	<td>     Inf</td>
 * 	<td>    0.88</td>
 * 	<td>    2.99</td>
 * 	<td>    1.03</td>
 * 	<td>    0.80</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/CONT-050.SIF">CONT-050</a></td>
 * 	<td>    0.91</td>
 * 	<td>    4.48</td>
 * 	<td>    4.70</td>
 * 	<td>    2.18</td>
 * 	<td>    3.04</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/CONT-100.SIF">CONT-100</a></td>
 * 	<td>    6.44</td>
 * 	<td>   33.35</td>
 * 	<td>   38.68</td>
 * 	<td>   11.55</td>
 * 	<td>   21.71</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/HUES-MOD.SIF">HUES-MOD</a></td>
 * 	<td>     Inf</td>
 * 	<td>    9.88</td>
 * 	<td>    7.57</td>
 * 	<td>   13.00</td>
 * 	<td>   12.55</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LASER.SIF">LASER</a></td>
 * 	<td>     Inf</td>
 * 	<td>     Inf</td>
 * 	<td>     Inf</td>
 * 	<td>    3.15</td>
 * 	<td>    4.07</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET1.SIF">LISWET1</a></td>
 * 	<td>    5.39</td>
 * 	<td>   10.92</td>
 * 	<td>   27.71</td>
 * 	<td>   11.21</td>
 * 	<td>    9.29</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET10.SIF">LISWET10</a></td>
 * 	<td>    5.43</td>
 * 	<td>   14.94</td>
 * 	<td>   25.97</td>
 * 	<td>   11.62</td>
 * 	<td>    9.06</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET11.SIF">LISWET11</a></td>
 * 	<td>    5.42</td>
 * 	<td>   18.85</td>
 * 	<td>   24.74</td>
 * 	<td>   10.68</td>
 * 	<td>    9.66</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET12.SIF">LISWET12</a></td>
 * 	<td>    5.63</td>
 * 	<td>   16.30</td>
 * 	<td>   24.14</td>
 * 	<td>   10.11</td>
 * 	<td>    8.28</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET2.SIF">LISWET2</a></td>
 * 	<td>    3.97</td>
 * 	<td>    9.65</td>
 * 	<td>   20.21</td>
 * 	<td>    7.85</td>
 * 	<td>    7.07</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET3.SIF">LISWET3</a></td>
 * 	<td>    2.90</td>
 * 	<td>    8.90</td>
 * 	<td>   13.11</td>
 * 	<td>    4.89</td>
 * 	<td>    4.85</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET4.SIF">LISWET4</a></td>
 * 	<td>    2.60</td>
 * 	<td>    7.77</td>
 * 	<td>    7.02</td>
 * 	<td>    4.03</td>
 * 	<td>    4.22</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET5.SIF">LISWET5</a></td>
 * 	<td>     Inf</td>
 * 	<td>     Inf</td>
 * 	<td>     Inf</td>
 * 	<td>   26.11</td>
 * 	<td>   26.25</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET6.SIF">LISWET6</a></td>
 * 	<td>    4.81</td>
 * 	<td>   17.48</td>
 * 	<td>    9.36</td>
 * 	<td>    8.55</td>
 * 	<td>    8.37</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET7.SIF">LISWET7</a></td>
 * 	<td>    5.27</td>
 * 	<td>   13.64</td>
 * 	<td>   30.48</td>
 * 	<td>    9.74</td>
 * 	<td>    8.78</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET8.SIF">LISWET8</a></td>
 * 	<td>    5.04</td>
 * 	<td>   11.85</td>
 * 	<td>   22.02</td>
 * 	<td>   10.25</td>
 * 	<td>    8.78</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET9.SIF">LISWET9</a></td>
 * 	<td>    5.40</td>
 * 	<td>   12.17</td>
 * 	<td>     Inf</td>
 * 	<td>    9.77</td>
 * 	<td>    8.94</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/MOSARQP1.SIF">MOSARQP1</a></td>
 * 	<td>    0.72</td>
 * 	<td>    0.59</td>
 * 	<td>    0.77</td>
 * 	<td>    1.05</td>
 * 	<td>    1.32</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/MOSARQP2.SIF">MOSARQP2</a></td>
 * 	<td>    0.19</td>
 * 	<td>    0.17</td>
 * 	<td>    0.18</td>
 * 	<td>    0.27</td>
 * 	<td>    0.26</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QE226.SIF">QE226</a></td>
 * 	<td>    0.79</td>
 * 	<td>     Inf</td>
 * 	<td>     Inf</td>
 * 	<td>    0.92</td>
 * 	<td>    0.83</td>
 * </tr>
 * <tr>
 * 	<td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QFFFFF80.SIF">QFFFFF80</a></td>
 * 	<td>    4.73</td>
 * 	<td>   20.98</td>
 * 	<td>    8.38</td>
 * 	<td>    2.87</td>
 * 	<td>    3.51</td>
 * </tr>
 * </table></div>
 * 
 */