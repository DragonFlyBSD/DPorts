# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: devel/p5-Log-Dispatch-Config/Makefile 332046 2013-10-30 02:52:46Z vanilla $

PORTNAME=	Log-Dispatch-Config
PORTVERSION=	1.04
CATEGORIES=	devel sysutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Log4j equivalent for Perl

BUILD_DEPENDS=	p5-IO-stringy>=0:${PORTSDIR}/devel/p5-IO-stringy \
		p5-AppConfig>=1.52:${PORTSDIR}/devel/p5-AppConfig \
		p5-Log-Dispatch>=2:${PORTSDIR}/devel/p5-Log-Dispatch
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
