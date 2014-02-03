# Created by: lth@FreeBSD.org
# $FreeBSD: devel/p5-File-Finder/Makefile 341710 2014-01-29 10:33:57Z az $

PORTNAME=	File-Finder
PORTVERSION=	0.53
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	File
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Nice wrapper for File::Find ala find(1)

RUN_DEPENDS=	p5-Text-Glob>0:${PORTSDIR}/textproc/p5-Text-Glob
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
