# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: textproc/p5-Sphinx-Manager/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	Sphinx-Manager
PORTVERSION=	0.06
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Sphinx search engine management (start/stop)

BUILD_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-Path-Class>=0:${PORTSDIR}/devel/p5-Path-Class \
		p5-Proc-ProcessTable>=0:${PORTSDIR}/devel/p5-Proc-ProcessTable \
		p5-Sphinx-Config>=0.09:${PORTSDIR}/textproc/p5-Sphinx-Config
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

MAN3=		Sphinx::Manager.3

.include <bsd.port.mk>
