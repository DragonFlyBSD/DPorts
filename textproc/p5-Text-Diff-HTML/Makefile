# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: textproc/p5-Text-Diff-HTML/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Text-Diff-HTML
PORTVERSION=	0.07
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Text::Diff::HTML - XHTML format for Text::Diff::Unified

BUILD_DEPENDS=	p5-Text-Diff>=0:${PORTSDIR}/textproc/p5-Text-Diff \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN3=		Text::Diff::HTML.3

NO_STAGE=	yes
.include <bsd.port.mk>
