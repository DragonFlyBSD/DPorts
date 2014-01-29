# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: textproc/p5-Text-Graphics/Makefile 340908 2014-01-24 14:59:10Z mat $

PORTNAME=	Text-Graphics
PORTVERSION=	1.0001
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	A text graphics rendering toolkit

BUILD_DEPENDS=	p5-Text-Wrapper>=0:${PORTSDIR}/textproc/p5-Text-Wrapper
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
