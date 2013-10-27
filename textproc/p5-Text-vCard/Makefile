# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: textproc/p5-Text-vCard/Makefile 331567 2013-10-25 11:20:05Z ehaupt $

PORTNAME=		Text-vCard
PORTVERSION=		2.13
CATEGORIES=		textproc perl5
MASTER_SITES=		CPAN
PKGNAMEPREFIX=		p5-

MAINTAINER=		ehaupt@FreeBSD.org
COMMENT=		Package to parse, edit and create multiple vCards (RFC 2426)

BUILD_DEPENDS=		p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp \
			p5-Text-vFile-asData>=0:${PORTSDIR}/devel/p5-Text-vFile-asData
RUN_DEPENDS:=		${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
