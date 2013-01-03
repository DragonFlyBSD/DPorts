# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD: ports/mail/claws-mail-mailmbox/Makefile,v 1.50 2012/12/10 17:32:44 svnexp Exp $

PORTNAME=	mailmbox
PORTVERSION=	1.15
CATEGORIES=	mail
MASTER_SITES=	http://www.claws-mail.org/downloads/plugins/
PKGNAMEPREFIX=	claws-mail-

MAINTAINER=	pawel@FreeBSD.org
COMMENT=	Mbox maildir plugin for Claws Mail

LICENSE=	GPLv3

BUILD_DEPENDS=	claws-mail>=3.9.0:${PORTSDIR}/mail/claws-mail
RUN_DEPENDS=	claws-mail>=3.9.0:${PORTSDIR}/mail/claws-mail

USE_GMAKE=	yes
USE_AUTOTOOLS=	autoconf
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	lib/claws-mail/plugins/mailmbox.a \
		lib/claws-mail/plugins/mailmbox.la \
		lib/claws-mail/plugins/mailmbox.so

.include <bsd.port.mk>
