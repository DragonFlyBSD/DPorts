# New ports collection makefile for:	textproc/p5-Text-Language-Guess
# Date created:		2006-09-25
# Whom:			Masahiro Teramoto <markun@onohara.to>
#
# $FreeBSD: ports/textproc/p5-Text-Language-Guess/Makefile,v 1.6 2012/11/17 06:02:10 svnexp Exp $
#

PORTNAME=	Text-Language-Guess
PORTVERSION=	0.02
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MSCHILLI
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Trained module to guess a document's language

BUILD_DEPENDS=	p5-Log-Log4perl>=1.0:${PORTSDIR}/devel/p5-Log-Log4perl \
		p5-Text-ExtractWords>=0:${PORTSDIR}/textproc/p5-Text-ExtractWords \
		p5-Lingua-StopWords>=0:${PORTSDIR}/textproc/p5-Lingua-StopWords
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		language-guess.1
MAN3=		Text::Language::Guess.3

.include <bsd.port.mk>
