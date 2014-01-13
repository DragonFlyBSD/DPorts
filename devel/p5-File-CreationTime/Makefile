# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-File-CreationTime/Makefile 338870 2014-01-06 12:43:03Z az $

PORTNAME=	File-CreationTime
PORTVERSION=	2.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Keeps track of file creation times

BUILD_DEPENDS=	p5-File-Attributes>=0:${PORTSDIR}/devel/p5-File-Attributes
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
