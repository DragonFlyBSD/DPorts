# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: textproc/p5-Sphinx-Config/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	Sphinx-Config
PORTVERSION=	0.09
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Sphinx search engine configuration file read/modify/write

BUILD_DEPENDS=	p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

MAN3=		Sphinx::Config.3

.include <bsd.port.mk>
