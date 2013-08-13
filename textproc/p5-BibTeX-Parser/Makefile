# Created by: Wen Heping<wen@FreeBSD.org>
# $FreeBSD: textproc/p5-BibTeX-Parser/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	BibTeX-Parser
PORTVERSION=	0.64
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GERHARD
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pure perl BibTeX parser

RUN_DEPENDS=	p5-LaTeX-ToUnicode>=0.02:${PORTSDIR}/textproc/p5-LaTeX-ToUnicode \
		p5-IO-String>0:${PORTSDIR}/devel/p5-IO-String

USES=		perl5
USE_PERL5=	configure

MAN3=		BibTeX::Parser.3 \
		BibTeX::Parser::Entry.3 \
		BibTeX::Parser::Author.3

.include <bsd.port.mk>
