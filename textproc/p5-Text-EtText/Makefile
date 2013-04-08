# New ports collection makefile for:	p5-HTML-Parser
# Date created: 			21 June 2002
# Whom:					Joseph Koshy <jkoshy@freebsd.org>
#
# $FreeBSD: textproc/p5-Text-EtText/Makefile 300897 2012-07-14 14:29:18Z beat $
#

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

PERL_CONFIGURE=	yes

MAN3=		Text::EtText.3 Text::EtText::DefaultGlossary.3 \
		Text::EtText::LinkGlossary.3 Text::EtText::EtText2HTML.3 \
		Text::EtText::HTML2EtText.3
MAN1=		ethtml2text.1 ettext2html.1

.include <bsd.port.mk>
