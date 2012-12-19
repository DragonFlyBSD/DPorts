# New ports collection makefile for:	p5-Text-SpellsChecker
# Date created:				23 Nov 2008
# Whom:					Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-Text-SpellChecker/Makefile,v 1.8 2012/11/17 06:02:10 svnexp Exp $
#

PORTNAME=	Text-SpellChecker
PORTVERSION=	0.11
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Perl5 OO interface for spell-checking a block of text

RUN_DEPENDS=	p5-Text-Aspell>=0:${PORTSDIR}/textproc/p5-Text-Aspell

PERL_CONFIGURE=	yes

MAN3=		Text::SpellChecker.3

.include <bsd.port.mk>
