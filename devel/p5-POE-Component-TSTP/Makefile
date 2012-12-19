# New ports collection makefile for:	POE-Component-TSTP
# Date created:		16 May 2004
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/devel/p5-POE-Component-TSTP/Makefile,v 1.6 2012/11/17 05:56:25 svnexp Exp $
#

PORTNAME=	POE-Component-TSTP
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	POE component to correctly handle Ctrl-Z in your program

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		POE::Component::TSTP.3

.include <bsd.port.mk>
