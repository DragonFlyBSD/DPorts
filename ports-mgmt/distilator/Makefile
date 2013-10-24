# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: ports-mgmt/distilator/Makefile 331362 2013-10-23 10:26:46Z ehaupt $

PORTNAME=	distilator
PORTVERSION=	0.2
PORTREVISION=	1
CATEGORIES=	ports-mgmt perl5
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Command-line script to check the availability of a ports distfiles

RUN_DEPENDS=	p5-URI>=1.56:${PORTSDIR}/net/p5-URI \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
