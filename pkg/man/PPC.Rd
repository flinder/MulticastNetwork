% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Multicast.R
\name{PPC}
\alias{PPC}
\title{PPC}
\usage{
PPC(D, beta, eta, sigma2, X, Y, timeunit = 3600, u, timedist = "lognormal")
}
\arguments{
\item{D}{number of events to be generated}

\item{beta}{P-length vector of coefficients for recipients}

\item{eta}{Q-length vector of coefficients for timestamps}

\item{sigma2}{variance parameter for the timestamps}

\item{X}{an array of dimension D x A x A x P for covariates used for Gibbs measure}

\item{Y}{an array of dimension D x A x Q for covariates used for timestamps GLM}

\item{timeunit}{hour (= 3600) or day (=3600*24) and so on}

\item{u}{D-length list of latent receiver vectors}

\item{timedist}{lognormal or exponential (will include others)}
}
\value{
generated data including (sender, recipients, timestamp)
}
\description{
Generate a collection of events according to the posterior predictive checks
}
