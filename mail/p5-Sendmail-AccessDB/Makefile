# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: mail/p5-Sendmail-AccessDB/Makefile 331567 2013-10-25 11:20:05Z ehaupt $

PORTNAME=	Sendmail-AccessDB
PORTVERSION=	1.03
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Perl5 interface to the Sendmail access.db list

BUILD_DEPENDS=	p5-BerkeleyDB>=0:${PORTSDIR}/databases/p5-BerkeleyDB
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
