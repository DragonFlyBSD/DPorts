# Created by: Konstantin Menshikov <kostjnspb@yandex.ru>
# $FreeBSD: textproc/p5-HTML-HTMLDoc/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	HTML-HTMLDoc
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	http://kostjn.spb.ru/freebsd/ \
		CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kostjnspb@yandex.ru
COMMENT=	Perl interface to the htmldoc program

BUILD_DEPENDS=	htmldoc>0:${PORTSDIR}/textproc/htmldoc
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		HTML::HTMLDoc.3 HTML::HTMLDoc::PDF.3

NO_STAGE=	yes
.include <bsd.port.mk>
