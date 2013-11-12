# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: textproc/p5-String-Truncate/Makefile 333254 2013-11-08 18:22:35Z lth $

PORTNAME=	String-Truncate
PORTVERSION=	1.100601
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	A module for when strings are too long to be displayed in...

RUN_DEPENDS=	p5-Sub-Exporter>=0.953:${PORTSDIR}/devel/p5-Sub-Exporter \
		p5-Sub-Install>=0.03:${PORTSDIR}/devel/p5-Sub-Install
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
