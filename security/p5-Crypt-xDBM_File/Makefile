# Created by: Cheng-Lung Sung <clsung@dragon2.net>
# $FreeBSD: security/p5-Crypt-xDBM_File/Makefile 332949 2013-11-06 07:39:31Z vanilla $

PORTNAME=	Crypt-xDBM_File
PORTVERSION=	1.02
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module encrypt almost any kind of dbm file

BUILD_DEPENDS=	p5-Crypt-Blowfish>=0:${PORTSDIR}/security/p5-Crypt-Blowfish
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
