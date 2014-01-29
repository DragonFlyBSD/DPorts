# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: textproc/p5-Text-Tmpl/Makefile 340915 2014-01-24 15:52:12Z mat $

PORTNAME=	Text-Tmpl
PORTVERSION=	0.33
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Templating system perl library

USES=		perl5
USE_PERL5=	configure patch

pre-patch:
	@${PERL} -pi -e '/OPTIMIZE|libtmpl.pod/ and $$_=""' \
		${WRKSRC}/Makefile.PL
	@${PERL} -pi -e 's/\(I32\)/(IV)/' \
		${WRKSRC}/typemap ${WRKSRC}/perl_tags.c

.include <bsd.port.mk>
