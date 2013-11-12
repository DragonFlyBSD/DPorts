# Created by: Joseph Koshy <jkoshy@FreeBSD.org>
# $FreeBSD: textproc/p5-Text-EtText/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	Text-EtText
PORTVERSION=	2.2
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A simple plain-text to HTML converter

BUILD_DEPENDS=	p5-HTML-Parser>0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
