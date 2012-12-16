# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: ports/devel/p5-Module-CoreList/Makefile,v 1.65 2012/11/27 15:00:00 svnexp Exp $

PORTNAME=	Module-CoreList
PORTVERSION=	2.78
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	See what modules shipped with versions of perl

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

PERL_CONFIGURE=	yes

MAN3=		Module::CoreList.3

post-patch:
	@${REINPLACE_CMD} -e '/EXE_FILES/d' ${WRKSRC}/Makefile.PL

regression-test: build
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} test

.include <bsd.port.mk>
