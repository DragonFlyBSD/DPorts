# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: devel/p5-POE-Component-TSTP/Makefile 332203 2013-10-31 06:20:32Z vanilla $

PORTNAME=	POE-Component-TSTP
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	POE component to correctly handle Ctrl-Z in your program

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
