/*
 * return double number in [x,x+1] with uniform distribution
 */

db Uniform(db x=.0){
  return x+(db)rand()/RAND_MAX;
}
