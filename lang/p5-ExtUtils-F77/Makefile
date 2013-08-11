# Created by: jmz
# $FreeBSD: lang/p5-ExtUtils-F77/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	ExtUtils-F77
PORTVERSION=	1.17
PORTREVISION=	1
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Helps link C programs with Fortran subroutines

USES=		perl5
USE_PERL5=	configure
USE_FORTRAN=	yes

MAN3=		ExtUtils::F77.3

post-patch:
	@${REINPLACE_CMD} -e "s|'gfortran44'|'${FC}'|" \
			  -e "s|'-O2'|'${CFLAGS}'|" \
			  ${WRKSRC}/F77.pm

.include <bsd.port.mk>
