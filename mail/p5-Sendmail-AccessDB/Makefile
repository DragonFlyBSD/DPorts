# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: mail/p5-Sendmail-AccessDB/Makefile 326257 2013-09-04 07:19:56Z az $

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

MAN3=		Sendmail::AccessDB.3

.include <bsd.port.mk>
