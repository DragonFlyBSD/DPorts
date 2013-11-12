# Created by: jmz
# $FreeBSD: lang/p5-ExtUtils-F77/Makefile 332724 2013-11-04 14:20:04Z vanilla $

PORTNAME=	ExtUtils-F77
PORTVERSION=	1.17
PORTREVISION=	2
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Helps link C programs with Fortran subroutines

USES=		perl5
USE_PERL5=	configure
USE_FORTRAN=	yes

post-patch:
	@${REINPLACE_CMD} -e "s|'gfortran44'|'${FC}'|" \
			  -e "s|'-O2'|'${CFLAGS}'|" \
			  ${WRKSRC}/F77.pm

.include <bsd.port.mk>
