# Created by: Volker Stolz <stolz@i2.informatik.rwth-aachen.de>
# $FreeBSD: www/eldav.el/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	eldav.el
PORTVERSION=	0.8.1
PORTEPOCH=	1
CATEGORIES=	www elisp
MASTER_SITES=	http://www.gohome.org/eldav/
DISTNAME=	eldav-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An interface to WebDAV servers for Emacs

RUN_DEPENDS=	nd:${PORTSDIR}/www/nd

NO_BUILD=	yes

EMACSLISPDIR=	${PREFIX}/share/emacs/site-lisp
XEMACSLISPDIR=	${PREFIX}/lib/xemacs/site-lisp

NO_STAGE=	yes
do-install:
	${MKDIR} ${EMACSLISPDIR}
	${MKDIR} ${XEMACSLISPDIR}
.for file in eldav.el vc-eldav.el
	${INSTALL_DATA} ${WRKSRC}/${file} ${EMACSLISPDIR}/
	${LN} -sf ${EMACSLISPDIR}/${file} ${XEMACSLISPDIR}/
.endfor

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
