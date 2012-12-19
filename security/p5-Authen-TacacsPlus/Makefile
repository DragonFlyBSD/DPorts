# New ports collection makefile for:	TacacsPlus
# Date created:				Mon Jan  1 04:34:25 2001
# Whom:					will
#
# $FreeBSD: ports/security/p5-Authen-TacacsPlus/Makefile,v 1.15 2012/11/17 06:01:10 svnexp Exp $
#

PORTNAME=	Authen-TacacsPlus
PORTVERSION=	0.23
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MIKEM/Authen-TacacsPlus
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A perl module that provides authentication using a tacacs+ server

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

PERL_CONFIGURE=	yes
MAKE_ENV+=	CCFLAGS="${CFLAGS}"

MAN3=		Authen::TacacsPlus.3

pre-build:
	${PERL} -pi -e "s:CCFLAGS =:CCFLAGS ?=:g" ${WRKSRC}/tacpluslib/Makefile

.include <bsd.port.mk>
