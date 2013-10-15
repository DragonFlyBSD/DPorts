# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: www/p5-libapreq2/Makefile 327776 2013-09-20 23:36:50Z bapt $

CATEGORIES=	www perl5 devel

MAINTAINER=	skv@FreeBSD.org
COMMENT=	Generic Apache2 Request Library with perl binding

MASTERDIR=	${.CURDIR}/../libapreq2

WITH_MODPERL2=	yes
MAKE_ENV+=	MAKE=${GMAKE} ## MakeMaker blows it without this

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
