# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/p5-Data-FormValidator-Constraints-DateTime/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Data-FormValidator-Constraints-DateTime
PORTVERSION=	1.11
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:WONKO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Data::FormValidator constraints for dates and times

BUILD_DEPENDS=	p5-Data-FormValidator>=0:${PORTSDIR}/textproc/p5-Data-FormValidator \
		p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-DateTime-Format-Strptime>=0:${PORTSDIR}/devel/p5-DateTime-Format-Strptime \
		p5-DateTime-Format-Builder>=0:${PORTSDIR}/devel/p5-DateTime-Format-Builder
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN3=		Data::FormValidator::Constraints::DateTime.3

.include <bsd.port.mk>
