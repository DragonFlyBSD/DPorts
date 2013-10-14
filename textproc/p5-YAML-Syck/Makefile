# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: textproc/p5-YAML-Syck/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	YAML-Syck
PORTVERSION=	1.27
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Fast, lightweight YAML and JSON loader and dumper

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS+=	< /dev/null

MAN3=		JSON::Syck.3 YAML::Syck.3

NO_STAGE=	yes
.include <bsd.port.mk>
