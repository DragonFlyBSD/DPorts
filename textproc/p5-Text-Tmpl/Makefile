# New ports collection makefile for:	textproc/p5-Text-Tmpl
# Date created:				31 December 2000
# Whom:					Anton Berezin <tobez@tobez.org>
#
# $FreeBSD: ports/textproc/p5-Text-Tmpl/Makefile,v 1.12 2012/11/17 06:02:10 svnexp Exp $
#

PORTNAME=	Text-Tmpl
PORTVERSION=	0.33
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Templating system perl library

PERL_CONFIGURE=	yes

MAN3=		template_syntax.3 Text::Tmpl.3 template_extend.3

pre-patch:
	@${PERL} -pi -e '/OPTIMIZE|libtmpl.pod/ and $$_=""' \
		${WRKSRC}/Makefile.PL
	@${PERL} -pi -e 's/\(I32\)/(IV)/' \
		${WRKSRC}/typemap ${WRKSRC}/perl_tags.c

.include <bsd.port.mk>
