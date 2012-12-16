# New ports collection makefile for:	p5-BibTeX-Parser
# Date created:				March 16, 2011
# Whom:					Wen Heping<wen@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-BibTeX-Parser/Makefile,v 1.3 2012/11/17 06:02:04 svnexp Exp $
#

PORTNAME=	BibTeX-Parser
PORTVERSION=	0.64
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GERHARD
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A pure perl BibTeX parser

RUN_DEPENDS=	p5-LaTeX-ToUnicode>=0.02:${PORTSDIR}/textproc/p5-LaTeX-ToUnicode \
		p5-IO-String>0:${PORTSDIR}/devel/p5-IO-String

PERL_CONFIGURE=	yes

MAN3=		BibTeX::Parser.3 \
		BibTeX::Parser::Entry.3 \
		BibTeX::Parser::Author.3

.include <bsd.port.mk>
