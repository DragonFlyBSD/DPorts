# New ports collection makefile for:	devel/p5-Acme-Damn
# Date created:				8 March 2010
# Whom:					Warner Losh <imp@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Acme-Damn/Makefile,v 1.6 2012/11/17 05:56:03 svnexp Exp $
#

PORTNAME=	Acme-Damn
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	imp@FreeBSD.org
COMMENT=	Unblessing perl objects

RUN_DEPENDS=	p5-Test-Exception>=0.29:${PORTSDIR}/devel/p5-Test-Exception
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3 += Acme::Damn.3

.include <bsd.port.mk>
