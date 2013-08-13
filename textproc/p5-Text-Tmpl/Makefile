# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: textproc/p5-Text-Tmpl/Makefile 324007 2013-07-31 06:54:09Z az $

PORTNAME=	Text-Tmpl
PORTVERSION=	0.33
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Templating system perl library

USES=		perl5
USE_PERL5=	configure patch

MAN3=		template_syntax.3 Text::Tmpl.3 template_extend.3

pre-patch:
	@${PERL} -pi -e '/OPTIMIZE|libtmpl.pod/ and $$_=""' \
		${WRKSRC}/Makefile.PL
	@${PERL} -pi -e 's/\(I32\)/(IV)/' \
		${WRKSRC}/typemap ${WRKSRC}/perl_tags.c

.include <bsd.port.mk>
