# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-XML-Handler-Trees/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	XML-Handler-Trees
PORTVERSION=	0.02
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	PerlSAX handlers for building tree structures

USES=		perl5
USE_PERL5=	configure
USE_DOS2UNIX=	Trees.pm

MAN3=		XML::Handler::Trees.3

NO_STAGE=	yes
post-extract:
	@${CHMOD} +w ${WRKSRC}/Trees.pm

.include <bsd.port.mk>
