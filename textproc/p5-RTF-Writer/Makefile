# Created by: clsung@dragon2.net
# $FreeBSD: textproc/p5-RTF-Writer/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	RTF-Writer
PORTVERSION=	1.11
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for generating documents in Rich Text Format

BUILD_DEPENDS=	p5-Image-Size>=0:${PORTSDIR}/graphics/p5-Image-Size
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
