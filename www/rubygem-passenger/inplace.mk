# $NetBSD$

USE_LANGUAGES+=		c c++
USE_RAKE=		yes

post-extract: extract-inplace-passenger

extract-inplace-passenger:
	cd ../../wip/ruby-passenger && ${MAKE} WRKDIR=${WRKDIR}/.passenger EXTRACT_DIR=${WRKDIR} \
		WRKSRC='$${EXTRACT_DIR}/$${DISTNAME}' SKIP_DEPENDS=YES fetch patch clean
	${MV} ${WRKDIR}/passenger-* ${WRKDIR}/passenger

.include "../../lang/ruby/modules.mk"
.include "../../www/curl/buildlink3.mk"
