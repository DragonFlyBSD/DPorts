# Created by: Konstantin Menshikov <kostjnspb@yandex.ru>
# $FreeBSD: textproc/p5-HTML-HTMLDoc/Makefile 340610 2014-01-21 14:03:59Z mat $

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

.include <bsd.port.mk>
