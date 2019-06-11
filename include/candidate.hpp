#ifndef CANDIDATE_H_
#define CANDIDATE_H_

#include <iostream>
#include <vector>
#include <memory>
#include <route.hpp>

class Candidate {
  protected:
    double fitness_ {-1.0};

  private:

  public:
    Candidate() = default;
    virtual ~Candidate() = default;

    virtual void calculate_fitness() = 0;
    void set_fitness(double f);
    double get_fitness();

    virtual std::shared_ptr<Route> crossover_with(const std::shared_ptr<Candidate> pCandidate) = 0;
    virtual std::shared_ptr<Route> mutate_with(const std::shared_ptr<Candidate> pCandidate) = 0;

    virtual void print() = 0;
};

#endif // CANDIDATE_H_
